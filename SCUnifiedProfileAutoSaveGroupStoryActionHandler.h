//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCUnifiedProfileMyStoriesDataSourceManager;

@interface SCUnifiedProfileAutoSaveGroupStoryActionHandler : NSObject <SCTraceEnabled, SCActionHandling>
{
    SCUnifiedProfileMyStoriesDataSourceManager *_myStoriesDataSourceManager;
}

- (void).cxx_destruct;
- (void)_createGroupStoryCompletionWithPublication:(id)arg1 response:(id)arg2 storyId:(id)arg3;
- (void)_createGroupStoryWithLocalPublication:(id)arg1 storyId:(id)arg2;
- (void)_setAutosaveStorySetting:(_Bool)arg1 hasMischief:(_Bool)arg2 storyId:(id)arg3;
- (void)_showGroupStoryUpdateFailureAlert;
- (void)_updateGroupStoryAutosaveCompletionWithPublication:(id)arg1 response:(id)arg2 originalAutosaveState:(_Bool)arg3 storyId:(id)arg4;
- (void)_updateGroupStoryAutosaveSettingsOnServer:(id)arg1 storyId:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithMyStoriesDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

