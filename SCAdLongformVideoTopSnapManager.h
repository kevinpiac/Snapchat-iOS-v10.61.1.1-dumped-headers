//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCAdLongformVideoTopSnapManager : NSObject
{
    NSMutableDictionary *_adRequestClientIdToMediaInfoMap;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)clear;
- (void)didCloseViewForAdRequestClientId:(id)arg1 itemId:(id)arg2 context:(id)arg3 params:(id)arg4 playlistItemController:(id)arg5;
- (id)extraPagePropertiesForAdRequestClientId:(id)arg1 experimentManager:(id)arg2;
- (id)init;
- (void)markFullViewForAd:(id)arg1;
- (double)mediaStartTimeForAd:(id)arg1;

@end

