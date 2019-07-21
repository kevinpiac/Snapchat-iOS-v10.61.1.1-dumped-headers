//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSABaseComponent.h"

@class LSADrawingComponentListenerAnnouncer, LSAEmojiProvider;

@interface LSADrawingComponent : LSABaseComponent
{
    LSADrawingComponentListenerAnnouncer *_drawingComponentAnnouncer;
    LSAEmojiProvider *_emojiProvider;
}

- (void).cxx_destruct;
- (void)_ensureEmojiProviderSet;
- (void)addListener:(id)arg1;
- (void)clearResources;
- (void)getDrawingOverlayForEffectId:(id)arg1 resolution:(struct CGSize)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeListener:(id)arg1;
- (void)selectBrushWithAssetId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDrawingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEmojiString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStrokeColor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStrokeWidth:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)undoStrokeWithCompletion:(CDUnknownBlockType)arg1;

@end

