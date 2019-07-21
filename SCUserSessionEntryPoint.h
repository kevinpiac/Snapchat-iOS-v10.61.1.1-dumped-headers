//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCScopeExposer, SCSystemScope, SCUserSessionScope, SCUserSessionSubScopesRouter, SCUserSessionWorkflow, SCUserStorageServices;

@interface SCUserSessionEntryPoint : SCEntryPoint
{
    SCUserSessionWorkflow *_sessionWorkflow;
    SCUserSessionSubScopesRouter *_router;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCScopeExposer *_activeUserSessionScopeExposer;
    SCScopeExposer *_termsOfUseScopeExposer;
    SCScopeExposer *_postRegistrationScopeExposer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCScopeExposer *activeUserSessionScopeExposer; // @synthesize activeUserSessionScopeExposer=_activeUserSessionScopeExposer;
- (void)begin;
@property(retain, nonatomic) SCScopeExposer *postRegistrationScopeExposer; // @synthesize postRegistrationScopeExposer=_postRegistrationScopeExposer;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(retain, nonatomic) SCScopeExposer *termsOfUseScopeExposer; // @synthesize termsOfUseScopeExposer=_termsOfUseScopeExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

