//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCLocalUtilityLensAvailabilityConfiguration : NSObject
{
    _Bool _amazonSearchEnabled;
    _Bool _shazamEnabled;
    _Bool _photoMathEnabled;
}

@property(readonly, nonatomic) _Bool amazonSearchEnabled; // @synthesize amazonSearchEnabled=_amazonSearchEnabled;
- (id)initWithAmazonSearchEnabled:(_Bool)arg1 shazamEnabled:(_Bool)arg2 photoMathEnabled:(_Bool)arg3;
@property(readonly, nonatomic) _Bool photoMathEnabled; // @synthesize photoMathEnabled=_photoMathEnabled;
@property(readonly, nonatomic) _Bool shazamEnabled; // @synthesize shazamEnabled=_shazamEnabled;

@end

