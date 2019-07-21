//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAChatDrawerAction : SCAUserTrackedEvent
{
    NSNumber *itemSentCount;
    NSNumber *withSearch;
    NSNumber *withBitmojiTabVisible;
    long long drawer;
    long long drawerViewMode;
    long long drawerActionType;
    long long previewIconProvider;
    long long source;
    NSString *section;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDrawer;
- (long long)getDrawerActionType;
- (long long)getDrawerViewMode;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getItemSentCount;
- (double)getPerUserSamplingRate;
- (long long)getPreviewIconProvider;
- (id)getSection;
- (long long)getSource;
- (_Bool)getWithBitmojiTabVisible;
- (_Bool)getWithSearch;
- (id)init;
- (void)setDrawer:(long long)arg1;
- (void)setDrawerActionType:(long long)arg1;
- (void)setDrawerViewMode:(long long)arg1;
- (void)setItemSentCount:(long long)arg1;
- (void)setPreviewIconProvider:(long long)arg1;
- (void)setSection:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setWithBitmojiTabVisible:(_Bool)arg1;
- (void)setWithSearch:(_Bool)arg1;

@end
