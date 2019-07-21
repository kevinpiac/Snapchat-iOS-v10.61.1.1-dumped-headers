//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCEmailService;
@protocol SCIdentityUserAdaptor;

@interface SCEmailManager : NSObject
{
    SCEmailService *_emailService;
    id <SCIdentityUserAdaptor> _userAdaptor;
}

- (void).cxx_destruct;
- (void)checkValidEmail:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithEmailService:(id)arg1 userAdaptor:(id)arg2;
- (void)updateEmail:(id)arg1 isPrompted:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)updateEmail:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

