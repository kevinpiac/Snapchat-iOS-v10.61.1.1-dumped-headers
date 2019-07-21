//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCLazy;
@protocol SCImageDownloading;

@interface SCDiscoverFeedStoryCircleView : UIView <SCViewModelConfigurable, SCEventAnnouncing, SCEventListener>
{
    SCLazy *_storyThumbnailView;
    SCLazy *_storyBitmojiAvatarView;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id _viewModel;
    double _preferredEdgeLength;
    id <SCImageDownloading> _imageDownloader;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_showStoryBitmojiAvatarView;
- (void)_showStoryThumbnailView;
- (void)_updateWithStoryBitmojiAvatarViewModel:(id)arg1;
- (void)_updateWithStoryThumbnailViewModel:(id)arg1;
- (void)addListener:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) double preferredEdgeLength; // @synthesize preferredEdgeLength=_preferredEdgeLength;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
