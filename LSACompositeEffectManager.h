//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSACompositeEffectManager-Protocol.h"

@class LSAComponentListenerAnnouncer, LSAEffectComponent, LSAQueuePerformer, NSString;

@interface LSACompositeEffectManager : NSObject <LSACompositeEffectManager>
{
    LSAEffectComponent *_effectComponent;
    weak_ptr_ae78a97a _coreManager;
    LSAQueuePerformer *_performer;
    LSAComponentListenerAnnouncer *_announcer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_performUnsafeBlock:(CDUnknownBlockType)arg1 unsafeErrorCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addEffectWithEffectInfo:(id)arg1 async:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPerformer:(id)arg1 effectComponent:(id)arg2;
- (void)removeEffectWithEffectId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2;
- (void)setDestinationRect:(struct CGRect)arg1 forEffectWithId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEffectRectangles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSourceRect:(struct CGRect)arg1 forEffectWithId:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

