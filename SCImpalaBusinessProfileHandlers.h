//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaBusinessProfileHandlerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SCImpalaService;
@protocol SCImpalaBusinessProfileHandlersDelegate;

@interface SCImpalaBusinessProfileHandlers : NSObject <SCImpalaBusinessProfileHandlerDelegate>
{
    NSMutableDictionary *_handlerById;
    SCImpalaService *_impalaService;
    _Bool _isManaged;
    id <SCImpalaBusinessProfileHandlersDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_cleanUp;
- (id)_handlerWithId:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)_handlersWithBusinessProfileIds:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)_scheduleCleanUp;
- (id)_updateHandlersWithBusinessProfiles:(id)arg1;
- (void)businessProfileHandler:(id)arg1 didUpdateSubscribed:(_Bool)arg2;
@property(readonly, nonatomic) __weak id <SCImpalaBusinessProfileHandlersDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlerForBusinessProfileId:(id)arg1 createIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handlerForHostAccountUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlersForBusinessProfileIds:(id)arg1 createIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithImpalaService:(id)arg1 isManaged:(_Bool)arg2 delegate:(id)arg3;
- (void)updateHandlerForBusinessProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateHandlersForBusinessProfiles:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
