//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCAdSnapMediaV2, SCSnapAdsIdentifier;

@interface SCAdSnapV2 : NSObject <NSCopying, NSCoding>
{
    _Bool _isSharable;
    NSString *_creativeId;
    long long _adType;
    SCSnapAdsIdentifier *_identifier;
    NSString *_brandName;
    NSString *_brandHeadline;
    SCAdSnapMediaV2 *_snapMedia;
    NSArray *_renditionList;
    NSString *_payingAdvertiserName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) NSString *brandHeadline; // @synthesize brandHeadline=_brandHeadline;
@property(readonly, copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCreativeId:(id)arg1 adType:(long long)arg2 identifier:(id)arg3 brandName:(id)arg4 brandHeadline:(id)arg5 snapMedia:(id)arg6 isSharable:(_Bool)arg7 renditionList:(id)arg8 payingAdvertiserName:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSharable; // @synthesize isSharable=_isSharable;
@property(readonly, copy, nonatomic) NSString *payingAdvertiserName; // @synthesize payingAdvertiserName=_payingAdvertiserName;
@property(readonly, copy, nonatomic) NSArray *renditionList; // @synthesize renditionList=_renditionList;
@property(readonly, copy, nonatomic) SCAdSnapMediaV2 *snapMedia; // @synthesize snapMedia=_snapMedia;

@end

