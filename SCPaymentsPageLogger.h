//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCPaymentsPageLogger : NSObject
{
    double _startTimeStamp;
    NSString *_paymentsSessionId;
    NSString *_adAccountId;
    NSString *_sourcePage;
    unsigned long long _pageSequenceId;
    long long _pageName;
    long long _previousPage;
    long long _nextPage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adAccountId; // @synthesize adAccountId=_adAccountId;
- (void)didBecomeActive;
- (id)initWithSessionId:(id)arg1 sourcePage:(id)arg2;
@property(nonatomic) long long nextPage; // @synthesize nextPage=_nextPage;
- (void)onPageChanged:(long long)arg1 withExitEvent:(long long)arg2;
- (void)onPageEnter:(long long)arg1;
@property(nonatomic) long long pageName; // @synthesize pageName=_pageName;
@property(nonatomic) unsigned long long pageSequenceId; // @synthesize pageSequenceId=_pageSequenceId;
- (id)paymentsSessionId;
@property(nonatomic) long long previousPage; // @synthesize previousPage=_previousPage;
- (id)sourcePage;
- (void)trackPaymentsEvent:(id)arg1;
- (void)willResignActive;

@end

