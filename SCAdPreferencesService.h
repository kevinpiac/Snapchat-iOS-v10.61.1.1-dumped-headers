//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSessionRequestManager;

@interface SCAdPreferencesService : NSObject
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (id)initWithRequestManager:(id)arg1;
- (void)updateAdPreferences:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

