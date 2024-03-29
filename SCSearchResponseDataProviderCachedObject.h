//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, SCR2SearchRequest, SCR2SearchResponse, SCSearchQuery;

@interface SCSearchResponseDataProviderCachedObject : NSObject <NSCopying, NSCoding>
{
    _Bool _isLocationDisabled;
    SCR2SearchResponse *_response;
    SCR2SearchRequest *_request;
    SCSearchQuery *_query;
    NSDate *_fetchedDate;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *fetchedDate; // @synthesize fetchedDate=_fetchedDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1 request:(id)arg2 query:(id)arg3 fetchedDate:(id)arg4 isLocationDisabled:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLocationDisabled; // @synthesize isLocationDisabled=_isLocationDisabled;
@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) SCR2SearchRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) SCR2SearchResponse *response; // @synthesize response=_response;

@end

