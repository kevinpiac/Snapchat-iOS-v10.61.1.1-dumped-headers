//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCNNetworkTypesHttpParams : NSObject
{
    NSArray *_headers;
    long long _method;
}

+ (id)HttpParamsWithHeaders:(id)arg1 method:(long long)arg2;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSArray *headers; // @synthesize headers=_headers;
- (id)initWithHeaders:(id)arg1 method:(long long)arg2;
@property(readonly, nonatomic) long long method; // @synthesize method=_method;

@end

