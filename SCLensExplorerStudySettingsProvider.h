//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerStudySettingsProviderProtocol-Protocol.h"

@class NSString, SCLazy;

@interface SCLensExplorerStudySettingsProvider : NSObject <SCLensExplorerStudySettingsProviderProtocol>
{
    NSString *_eventPrefix;
    SCLazy *_experimentManager;
}

- (void).cxx_destruct;
- (id)_studiesWithPrefix:(id)arg1;
@property(readonly, nonatomic) unsigned long long creatorSnapProPageState;
@property(readonly, nonatomic) unsigned long long entryPointIconTreatment;
@property(readonly, nonatomic) _Bool halfHeightEnabled;
- (id)initWithEventPrefix:(id)arg1 experimentManager:(id)arg2;
- (id)studyInfoArray;
- (id)studyInfoDictionary;
@property(readonly, nonatomic) _Bool swipeGestureEnabled;
@property(readonly, nonatomic) _Bool swipeGestureHintEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

