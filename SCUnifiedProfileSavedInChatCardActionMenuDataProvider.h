//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedActionMenuDataProvider-Protocol.h"

@class NSString, SCProfileChatMediaDataModel, SCProfileChatMediaDataSource, SCUserSession;
@protocol SCUnifiedActionMenuDataProviderDelegate;

@interface SCUnifiedProfileSavedInChatCardActionMenuDataProvider : NSObject <SCUnifiedActionMenuDataProvider>
{
    SCProfileChatMediaDataSource *_profileChatMediaDataSource;
    SCUserSession *_userSession;
    SCProfileChatMediaDataModel *_dataModel;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_delete;
- (id)_saveInChat;
- (id)_saveToCameraRoll;
- (id)_sendTo;
- (id)_unsaveInChat;
@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithProfileChatMediaDataSource:(id)arg1 userSession:(id)arg2 chatMediaDataModel:(id)arg3;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
