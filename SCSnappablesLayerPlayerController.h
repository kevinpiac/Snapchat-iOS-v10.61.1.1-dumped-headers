//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPlayerLooper, SCSnappablesLayer, SCWeakTimer, UIView;
@protocol SCOperaImageProvider, SCOperaVideoAssetProvider, SCSnappablesLayerPlayerControllerDelegate;

@interface SCSnappablesLayerPlayerController : NSObject
{
    SCSnappablesLayer *_layer;
    SCPlayerLooper *_looper;
    SCWeakTimer *_timer;
    UIView *_focusView;
    id <SCOperaImageProvider> _imageProvider;
    id <SCOperaVideoAssetProvider> _videoProvider;
    id <SCSnappablesLayerPlayerControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_clearAutoshowTriggers;
- (void)_configurePlayerViewForImageKey:(id)arg1;
- (void)_configurePlayerViewForVideoAsset:(id)arg1;
- (void)_determineSizeForLayerWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isValid;
- (id)_layerAsset;
- (void)_resetPlayerView;
- (struct CGSize)_sizeForAsset:(id)arg1;
- (void)autoshowImageOverlay:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCSnappablesLayerPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithLayer:(id)arg1 imageProvider:(id)arg2 videoProvider:(id)arg3;
- (void)mute;
- (void)pause;
- (void)preparePlayerView:(CDUnknownBlockType)arg1;
- (void)restart;
- (void)resume;
- (void)unmute;

@end

