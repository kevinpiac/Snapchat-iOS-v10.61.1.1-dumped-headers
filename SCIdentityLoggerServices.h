//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLoginStateTransitionLogger, SCSignupStateTransitionLogger, SCStateTransitionLogger;

@interface SCIdentityLoggerServices : NSObject
{
    SCStateTransitionLogger *_logger;
    SCSignupStateTransitionLogger *_signupStateTransitionLogger;
    SCLoginStateTransitionLogger *_loginStateTransitionLogger;
}

- (void).cxx_destruct;
- (id)init;
@property(readonly) SCLoginStateTransitionLogger *loginStateTransitionLogger; // @synthesize loginStateTransitionLogger=_loginStateTransitionLogger;
@property(readonly) SCSignupStateTransitionLogger *signupStateTransitionLogger; // @synthesize signupStateTransitionLogger=_signupStateTransitionLogger;

@end

