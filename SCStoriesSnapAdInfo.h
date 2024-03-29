//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCStoriesAdPlacement, SCStoriesSponsorMetadata, SCStoriesSponsoredSlug;

@interface SCStoriesSnapAdInfo : NSObject <NSCopying>
{
    _Bool _adCanFollow;
    _Bool _isSponsered;
    long long _brandFriendliness;
    SCStoriesAdPlacement *_adPlacement;
    SCStoriesSponsorMetadata *_sponsor;
    SCStoriesSponsoredSlug *_sponsoredSlug;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool adCanFollow; // @synthesize adCanFollow=_adCanFollow;
@property(readonly, copy, nonatomic) SCStoriesAdPlacement *adPlacement; // @synthesize adPlacement=_adPlacement;
@property(readonly, nonatomic) long long brandFriendliness; // @synthesize brandFriendliness=_brandFriendliness;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithBrandFriendliness:(long long)arg1 adPlacement:(id)arg2 adCanFollow:(_Bool)arg3 isSponsered:(_Bool)arg4 sponsor:(id)arg5 sponsoredSlug:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSponsered; // @synthesize isSponsered=_isSponsered;
@property(readonly, copy, nonatomic) SCStoriesSponsorMetadata *sponsor; // @synthesize sponsor=_sponsor;
@property(readonly, copy, nonatomic) SCStoriesSponsoredSlug *sponsoredSlug; // @synthesize sponsoredSlug=_sponsoredSlug;

@end

