//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacDataStorageUpdateListener-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCChatInputItem, SCCognacDataStorage, SCExperimentManager, SCPreferences, SCQueuePerformer;
@protocol SCCognacChatDrawerItemAppearanceControllerDelegate;

@interface SCCognacChatDrawerItemAppearanceController : NSObject <SCCognacDataStorageUpdateListener, SCEventListener>
{
    SCChatInputItem *_inputItem;
    SCCognacDataStorage *_dataStorage;
    SCPreferences *_preferences;
    SCExperimentManager *_experimentManager;
    SCQueuePerformer *_performer;
    NSMutableSet *_appIdsSeenInDrawer;
    NSMutableDictionary *_appUpdateVersionsSeenInDrawer;
    unsigned long long _currentItemAppearanceType;
    id <SCCognacChatDrawerItemAppearanceControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_animateDrawerTileIfNecessaryWithViewModel:(id)arg1;
- (void)_updateDrawerTileSeenStateIfNecessaryWithViewModel:(id)arg1;
- (void)_updateInputItemAppearanceIfNecessary;
- (void)cognacDataStorageDidUpdateWithResult:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentItemAppearanceType; // @synthesize currentItemAppearanceType=_currentItemAppearanceType;
@property(nonatomic) __weak id <SCCognacChatDrawerItemAppearanceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithInputItem:(id)arg1 dataStorage:(id)arg2 preferences:(id)arg3 experimentManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

