//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASwipeBase.h"

@class NSNumber, NSString;

@interface SCALensOptionSwipe : SCASwipeBase
{
    NSNumber *camera;
    long long lensSource;
    NSString *lensSessionId;
    NSString *lensOptionId;
    NSString *filterLensId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCamera;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterLensId;
- (id)getLensOptionId;
- (id)getLensSessionId;
- (long long)getLensSource;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setCamera:(long long)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setLensSessionId:(id)arg1;
- (void)setLensSource:(long long)arg1;

@end

