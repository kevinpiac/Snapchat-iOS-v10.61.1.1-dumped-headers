//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class SCSponsoredSlug;

@interface SCAdTreatment : NSObject <NSCoding>
{
    SCSponsoredSlug *_sponsoredSlug;
    SCSponsoredSlug *_adSlug;
}

+ (_Bool)initialized;
+ (id)path;
+ (id)shared;
- (void).cxx_destruct;
@property(readonly) SCSponsoredSlug *adSlug;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)parseSponsoredSlugFromAllUpdatesResponse:(id)arg1;
- (_Bool)saveState;
- (void)setAdSlug:(id)arg1;
- (void)setSponsoredSlug:(id)arg1;
@property(readonly) SCSponsoredSlug *sponsoredSlug;

@end

