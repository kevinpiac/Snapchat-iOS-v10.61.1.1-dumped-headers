//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface SCRequestTrackingInfo : NSObject <NSCoding>
{
    NSString *_trackingId;
    unsigned long long _expirationInDays;
    NSString *_type;
    NSString *_mediaType;
    NSString *_mediaId;
    NSString *_requestId;
    NSString *_requestRankingTrackingId;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned long long expirationInDays; // @synthesize expirationInDays=_expirationInDays;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackingId:(id)arg1 mediaId:(id)arg2 type:(id)arg3 mediaType:(id)arg4 expirationInDays:(unsigned long long)arg5;
- (id)initWithTrackingId:(id)arg1 type:(id)arg2 mediaType:(id)arg3 expirationInDays:(unsigned long long)arg4;
- (_Bool)isChatSnap;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToRequestTrackingInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSString *requestRankingTrackingId; // @synthesize requestRankingTrackingId=_requestRankingTrackingId;
@property(copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;

@end

