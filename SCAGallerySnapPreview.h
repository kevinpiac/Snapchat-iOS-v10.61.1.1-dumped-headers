//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAGallerySnapPreview : SCAUserTrackedEvent
{
    NSNumber *withEdit;
    NSNumber *withSave;
    NSNumber *withDelete;
    NSNumber *viewTimeSec;
    long long mediaType;
    long long galleryContextMenuSource;
    long long playerVersion;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getGalleryContextMenuSource;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (long long)getPlayerVersion;
- (double)getViewTimeSec;
- (_Bool)getWithDelete;
- (_Bool)getWithEdit;
- (_Bool)getWithSave;
- (id)init;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setPlayerVersion:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setWithDelete:(_Bool)arg1;
- (void)setWithEdit:(_Bool)arg1;
- (void)setWithSave:(_Bool)arg1;

@end
