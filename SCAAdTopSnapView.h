//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, SCAAdView;

@interface SCAAdTopSnapView : NSObject <NamedEvent, NSCopying>
{
    NSNumber *tapPositionX;
    NSNumber *tapPositionY;
    NSNumber *tapPositionXRelative;
    NSNumber *tapPositionYRelative;
    NSNumber *fullView;
    NSNumber *webviewLoadedOnEntry;
    NSNumber *webviewLoadedOnExit;
    long long mediaType;
    long long cardExitEvent;
    SCAAdView *adView;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdView;
- (long long)getCardExitEvent;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getFullView;
- (long long)getMediaType;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getTapPositionX;
- (double)getTapPositionXRelative;
- (long long)getTapPositionY;
- (double)getTapPositionYRelative;
- (_Bool)getWebviewLoadedOnEntry;
- (_Bool)getWebviewLoadedOnExit;
- (id)init;
- (void)setAdView:(id)arg1;
- (void)setCardExitEvent:(long long)arg1;
- (void)setFullView:(_Bool)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setTapPositionX:(long long)arg1;
- (void)setTapPositionXRelative:(double)arg1;
- (void)setTapPositionY:(long long)arg1;
- (void)setTapPositionYRelative:(double)arg1;
- (void)setWebviewLoadedOnEntry:(_Bool)arg1;
- (void)setWebviewLoadedOnExit:(_Bool)arg1;

@end

