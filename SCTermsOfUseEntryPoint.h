//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCSystemScope, SCTermsOfUseScope, SCTermsOfUseWorkflow;

@interface SCTermsOfUseEntryPoint : SCEntryPoint
{
    SCTermsOfUseWorkflow *_termsOfUseWorkflow;
    SCSystemScope *_systemScope;
    SCTermsOfUseScope *_termsOfUseScope;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCTermsOfUseScope *termsOfUseScope; // @synthesize termsOfUseScope=_termsOfUseScope;

@end

