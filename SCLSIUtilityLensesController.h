//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLSIScanDataStateDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, SCLazy;
@protocol SCLSIUtilityLensStatePresenter;

@interface SCLSIUtilityLensesController : NSObject <SCLSIScanDataStateDelegate>
{
    SCLazy *_experimentManager;
    id <SCLSIUtilityLensStatePresenter> _utilityLensPresenter;
    unsigned long long _currentDevicePosition;
    NSDictionary *_state;
    struct NSString *_currentContext;
}

- (void).cxx_destruct;
- (void)configureWithPresenter:(id)arg1;
@property(copy, nonatomic) NSString *currentContext; // @synthesize currentContext=_currentContext;
- (id)dataStateForContext:(struct NSString *)arg1;
@property(readonly, copy, nonatomic) NSArray *enabledUtilityContexts;
- (void)hideScanStateUI;
- (id)initWithExperimentManager:(id)arg1;
- (_Bool)isPointInsideScanStateUI:(struct CGPoint)arg1;
- (void)resetAllResults;
- (void)resetCurrentResults;
- (id)resultForContext:(struct NSString *)arg1;
- (void)scanDataState:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)setDevicePosition:(unsigned long long)arg1;
- (void)showCurrentScanStateButtonForContext:(struct NSString *)arg1;
- (id)utilityLensMetadataStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

