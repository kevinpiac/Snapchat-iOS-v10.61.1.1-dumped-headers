//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGallerySavingStart : SCAUserTrackedEvent
{
    NSNumber *withEdit;
    long long mediaType;
    long long saveType;
    long long saveSourceType;
    NSString *captureSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCaptureSessionId;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (long long)getSaveSourceType;
- (long long)getSaveType;
- (_Bool)getWithEdit;
- (id)init;
- (void)setCaptureSessionId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setSaveSourceType:(long long)arg1;
- (void)setSaveType:(long long)arg1;
- (void)setWithEdit:(_Bool)arg1;

@end

