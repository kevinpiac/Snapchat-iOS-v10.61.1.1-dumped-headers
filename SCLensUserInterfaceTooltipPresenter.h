//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"

@class NSString, SCLens, SCLensHintProvider;
@protocol SCFeatureToggleCameraButton, SCLensUserInterfaceDelegate;

@interface SCLensUserInterfaceTooltipPresenter : NSObject <LSAEffectComponentListener, SCLensUIUpdateListener>
{
    id <SCLensUserInterfaceDelegate> _userInterfaceDelegate;
    SCLensHintProvider *_hintProvider;
    _Bool _lensesActive;
    SCLens *_selectedLens;
    id <SCFeatureToggleCameraButton> _toggleCameraButton;
}

- (void).cxx_destruct;
- (void)didEndDisplayingLens:(id)arg1;
- (void)didHideLenses;
- (void)didSelectLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)effectComponent:(id)arg1 didInstantiatedEffectWithId:(id)arg2 isFromCache:(_Bool)arg3;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 performHapticFeedback:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 savePersistentStore:(id)arg3;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showHintWithId:(id)arg3;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showPopUpHintWithId:(id)arg3 interfaceElement:(unsigned long long)arg4;
- (void)effectComponent:(id)arg1 hideAllHintsForEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 loadPersistentStoreForEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 willTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 willTurnOnEffectWithId:(id)arg2;
- (id)initWithUserInterfaceDelegate:(id)arg1 hintProvider:(id)arg2;
@property(nonatomic) __weak id <SCFeatureToggleCameraButton> toggleCameraButton; // @synthesize toggleCameraButton=_toggleCameraButton;
- (void)willDisplayLens:(id)arg1;
- (void)willShowLenses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

