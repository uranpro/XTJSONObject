//
//  XTJSONObject.h
//  XTUtils
//
//  Created by uranpro on 23.06.11.
//  Copyright 2011 xtraVoid. All rights reserved.
//

#import "XTJSONObject.h"
#import "JSON.h"

NSStringEncoding const XTJSONObjectDefaultEncoding = NSUTF8StringEncoding;

@implementation XTJSONObject

- (id)initWithJSONDict:(NSDictionary *)d {
    self = [super init];
    if (self) {
        //
    }
    return self;
}

- (id)initWithJSONData:(NSData *)data {
    return [self initWithJSONData:data
                     withEncoding:XTJSONObjectDefaultEncoding];
}

- (id)initWithJSONData:(NSData *)data withEncoding:(NSStringEncoding)encoding {
    return [self initWithJSONString:[[[NSString alloc] initWithData:data encoding:encoding] autorelease]];
}

- (id)initWithJSONString:(NSString *)str {
    return [self initWithJSONDict:[str JSONValue]];
}

#pragma mark - Factory methods

+ (id)object {
    return [[[self alloc] init] autorelease];
}

+ (id)objectFromJSONData:(NSData *)data withEncoding:(NSStringEncoding) encoding {
    return [self objectFromJSONString:[[[NSString alloc] initWithData:data
                                                             encoding:encoding] autorelease]];
}

+ (id)objectFromJSONData:(NSData *)data {
    return [self objectFromJSONData:data
                       withEncoding:XTJSONObjectDefaultEncoding];
}

+ (id)objectFromJSONString:(NSString *)str {
    return [self objectFromJSONDict:[str JSONValue]];
}

+ (id)objectFromJSONDict:(NSDictionary *)d {
    return [[[self alloc] initWithJSONDict:d] autorelease];
}

+ (NSArray *)objectsFromJSONArrayData:(NSData *)data withEncoding:(NSStringEncoding)encoding {
    return [self objectsFromJSONArrayString:[[[NSString alloc] initWithData:data
                                                                   encoding:encoding] autorelease]];
}

+ (NSArray *)objectsFromJSONArrayData:(NSData *)data {
    return [self objectsFromJSONArrayData:data
                             withEncoding:XTJSONObjectDefaultEncoding];
}

+ (NSArray *)objectsFromJSONArrayString:(NSString *)str {
    return [self objectsFromJSONArrayDict:[str JSONValue]];
}

+ (NSArray *)objectsFromJSONArrayDict:(NSDictionary *)d {
    NSMutableArray *tmp = [NSMutableArray array];
    
    for (id i in d)
        [tmp addObject:[self objectFromJSONDict:i]];
    
    return tmp;
}

@end
