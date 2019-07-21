//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCUnifiedActionMenuDataProvider-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCFeatureSettingsManager, SCFriendUnifiedProfileDataSource, SCUnifiedProfileOpenFriendActionMenuActionData;
@protocol SCUnifiedActionMenuDataProviderDelegate;

@interface SCFriendUnifiedActionMenuDataProvider : NSObject <SCEventListener, SCUpdateListener, SCUnifiedActionMenuDataProvider>
{
    SCUnifiedProfileOpenFriendActionMenuActionData *_actionData;
    SCFeatureSettingsManager *_featureSettingsManager;
    SCFriendUnifiedProfileDataSource *_dataSource;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithUnifiedProfileOpenFriendActionData:(id)arg1 featureSettingsManager:(id)arg2 dataSource:(id)arg3;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

