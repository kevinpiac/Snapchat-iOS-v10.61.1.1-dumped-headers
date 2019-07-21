//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCXWeather;

@interface SCXWeatherRendererLiveEditController : NSObject
{
    _Bool _liveEditReloadInProgress;
    double _lastLiveEditReloadTime;
    SCXWeather *_liveEditWeather;
}

+ (void)_getLiveReloadDataAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)loadImageWithHost:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_updateLiveReloadWeatherWithJson:(id)arg1 host:(id)arg2;
@property(retain) SCXWeather *liveEditWeather; // @synthesize liveEditWeather=_liveEditWeather;
- (void)refreshLiveWeatherIfNecessaryWithHost:(id)arg1;

@end
