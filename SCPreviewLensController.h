//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAAnalyticsComponentListener-Protocol.h"
#import "LSAEffectComponentListener-Protocol.h"
#import "LSATouchProcessingDelegate-Protocol.h"
#import "SCImageProcessLensCommandListener-Protocol.h"

@class LSATouchProcessingController, NSString, SCImageProcessLensCommand, UIView;
@protocol SCActiveLensProvider><SCLensBitmojiProvider, SCActiveLensProvider><SCLensRemoteAssetsProvider, SCLensBitmojiProviderFactory, SCLensLogger, SCLensRemoteAssetsProviderFactory, SCPreviewLensControllerDelegate, UIGestureRecognizerDelegate;

@interface SCPreviewLensController : NSObject <LSAEffectComponentListener, LSATouchProcessingDelegate, LSAAnalyticsComponentListener, SCImageProcessLensCommandListener>
{
    id <SCPreviewLensControllerDelegate> _delegate;
    UIView *_contentView;
    id <UIGestureRecognizerDelegate> _gestureRecognizerDelegate;
    id <SCLensBitmojiProviderFactory> _bitmojiProviderFactory;
    id <SCLensRemoteAssetsProviderFactory> _remoteAssetsProviderFactory;
    id <SCActiveLensProvider><SCLensBitmojiProvider> _bitmojiProvider;
    id <SCActiveLensProvider><SCLensRemoteAssetsProvider> _remoteAssetsProvider;
    LSATouchProcessingController *_touchProcessingController;
    id <SCLensLogger> _lensLogger;
    _Bool _touchEnabled;
    _Bool _touchInProgress;
    _Bool _bitmojiEnabled;
    SCImageProcessLensCommand *_lensCommand;
}

- (void).cxx_destruct;
- (void)_deactivateCurrentLensCommand;
- (id)_lensFromLensCommand;
- (unsigned long long)_touchTypeForGestureRecognizer:(id)arg1;
- (void)analyticsComponent:(id)arg1 didChangeContent:(id)arg2 effectId:(id)arg3;
- (void)analyticsComponent:(id)arg1 didPrepareEventAnalyticsReport:(id)arg2 effectId:(id)arg3;
- (void)analyticsComponent:(id)arg1 didPreparePerformanceAnalyticsReport:(id)arg2;
@property(nonatomic) _Bool bitmojiEnabled; // @synthesize bitmojiEnabled=_bitmojiEnabled;
- (void)dealloc;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (_Bool)hasGestureRecognizer:(id)arg1;
- (void)imageProcessLensCommand:(id)arg1 didFinishProcessingFrameWithLens:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeExpression:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeFaces:(unsigned long long)arg2;
- (void)imageProcessLensCommand:(id)arg1 didUnloadWithLensComponentManager:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 willLoadWithLensComponentManager:(id)arg2;
- (id)initWithDelegate:(id)arg1 contentView:(id)arg2 gestureRecognizerDelegate:(id)arg3 bitmojiProviderFactory:(id)arg4 remoteAssetsProviderFactory:(id)arg5 logger:(id)arg6;
@property(retain, nonatomic) SCImageProcessLensCommand *lensCommand; // @synthesize lensCommand=_lensCommand;
- (void)setRemoteAssetsEnabled:(_Bool)arg1;
@property(nonatomic) _Bool touchEnabled; // @synthesize touchEnabled=_touchEnabled;
@property(nonatomic) _Bool touchInProgress; // @synthesize touchInProgress=_touchInProgress;
- (_Bool)shouldBlockTouches:(id)arg1;
- (void)touchProcessingController:(id)arg1 didReceiveError:(id)arg2;
- (void)touchProcessingControllerDidFinishInteraction:(id)arg1;
- (void)touchProcessingControllerDidProcessTouches:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

