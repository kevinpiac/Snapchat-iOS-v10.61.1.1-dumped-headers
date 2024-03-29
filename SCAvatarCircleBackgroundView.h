//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSString, SCAvatarCircleBackgroundViewModel, SCEventListenerAnnouncer, SCLazy, UIBezierPath;
@protocol SCImageDownloading;

@interface SCAvatarCircleBackgroundView : UIView <SCEventAnnouncing, SCEventListener>
{
    SCLazy *_shapeView;
    SCLazy *_networkImage;
    SCEventListenerAnnouncer *_eventAnnouncer;
    struct CGRect _shapeLayerPathRect;
    UIBezierPath *_shapeLayerPath;
    SCAvatarCircleBackgroundViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_setShapeLayerPathRect:(struct CGRect)arg1;
- (void)_showBackgroundNetworkImage;
- (void)_showShapeView;
- (void)addListener:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) SCAvatarCircleBackgroundViewModel *viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

