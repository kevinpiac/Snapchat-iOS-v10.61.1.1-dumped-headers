//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCReportStateManager.h"

@class SCReportReasonNode;

@interface SCReportPublisherStoryStateManager : SCReportStateManager
{
}

+ (id)_buildNodeDontWantToSeeIt;
+ (id)_buildNodeHarassmentHateSpeech;
+ (id)_buildNodeIllegalSubstance;
+ (id)_buildNodeMore;
+ (id)_buildNodeNuditySexualContent;
+ (id)_buildNodeOffensive;
+ (id)_buildNodeOther;
+ (id)_buildNodeViolence;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SCReportReasonNode *currentNode; // @dynamic currentNode;

@end

