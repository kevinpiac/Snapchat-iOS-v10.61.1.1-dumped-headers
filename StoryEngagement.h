//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, StoryFeedback, StoryFeedbackSeries;

@interface StoryEngagement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) StoryFeedback *engmt; // @dynamic engmt;
@property(retain, nonatomic) StoryFeedbackSeries *engmtSeries; // @dynamic engmtSeries;
@property(retain, nonatomic) NSMutableArray *engmtsByAgeArray; // @dynamic engmtsByAgeArray;
@property(readonly, nonatomic) unsigned long long engmtsByAgeArray_Count; // @dynamic engmtsByAgeArray_Count;
@property(retain, nonatomic) NSMutableArray *engmtsByCountryArray; // @dynamic engmtsByCountryArray;
@property(readonly, nonatomic) unsigned long long engmtsByCountryArray_Count; // @dynamic engmtsByCountryArray_Count;
@property(retain, nonatomic) NSMutableArray *engmtsByGenderArray; // @dynamic engmtsByGenderArray;
@property(readonly, nonatomic) unsigned long long engmtsByGenderArray_Count; // @dynamic engmtsByGenderArray_Count;
@property(nonatomic) _Bool hasEngmt; // @dynamic hasEngmt;
@property(nonatomic) _Bool hasEngmtSeries; // @dynamic hasEngmtSeries;
@property(retain, nonatomic) NSMutableArray *targetedUsersEngmtSeriesArray; // @dynamic targetedUsersEngmtSeriesArray;
@property(readonly, nonatomic) unsigned long long targetedUsersEngmtSeriesArray_Count; // @dynamic targetedUsersEngmtSeriesArray_Count;

@end

