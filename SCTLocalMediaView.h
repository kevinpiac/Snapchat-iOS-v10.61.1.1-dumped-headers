//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTRoundCornerView.h"

@class SCTLocalMediaViewListenerAnnouncer, UIView;
@protocol SCTLocalMediaViewDelegate;

@interface SCTLocalMediaView : SCTRoundCornerView
{
    id <SCTLocalMediaViewDelegate> _delegate;
    SCTLocalMediaViewListenerAnnouncer *_announcer;
    UIView *_mediaSubview;
    _Bool _fullscreen;
    unsigned long long _media;
}

- (void).cxx_destruct;
- (void)_animateFullscreenEntering:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_attachView:(id)arg1;
- (void)_toggleExistingMediaSubview:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithDelegate:(id)arg1;
- (_Bool)isFullscreen;
@property(nonatomic) unsigned long long media; // @synthesize media=_media;
- (void)removeListener:(id)arg1;
- (void)toggleFullscreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end

