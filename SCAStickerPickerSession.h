//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber, NSString;

@interface SCAStickerPickerSession : SCAUserTrackedEvent
{
    NSNumber *stickerSubsectionViewCount;
    NSNumber *stickerSectionsViewCount;
    NSNumber *viewTimeSec;
    NSNumber *withStickerPick;
    NSNumber *withSearch;
    NSNumber *searchSequenceId;
    NSNumber *withBitmojiTabVisible;
    NSNumber *contextualStickerLoadTime;
    long long stickerSourceTab;
    long long stickerPickerType;
    NSString *stickerSectionsViewed;
    NSString *stickerSectionsEntryEvents;
    NSString *snapSessionId;
    NSString *stickerSessionId;
    NSString *searchTerm;
    NSString *captureSessionId;
    NSDate *sessionStartTime;
    NSDate *sessionEndTime;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCaptureSessionId;
- (long long)getContextualStickerLoadTime;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSearchSequenceId;
- (id)getSearchTerm;
- (id)getSessionEndTime;
- (id)getSessionStartTime;
- (id)getSnapSessionId;
- (long long)getStickerPickerType;
- (id)getStickerSectionsEntryEvents;
- (long long)getStickerSectionsViewCount;
- (id)getStickerSectionsViewed;
- (id)getStickerSessionId;
- (long long)getStickerSourceTab;
- (long long)getStickerSubsectionViewCount;
- (double)getViewTimeSec;
- (_Bool)getWithBitmojiTabVisible;
- (_Bool)getWithSearch;
- (_Bool)getWithStickerPick;
- (id)init;
- (void)setCaptureSessionId:(id)arg1;
- (void)setContextualStickerLoadTime:(long long)arg1;
- (void)setSearchSequenceId:(long long)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSessionEndTime:(id)arg1;
- (void)setSessionStartTime:(id)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setStickerPickerType:(long long)arg1;
- (void)setStickerSectionsEntryEvents:(id)arg1;
- (void)setStickerSectionsViewCount:(long long)arg1;
- (void)setStickerSectionsViewed:(id)arg1;
- (void)setStickerSessionId:(id)arg1;
- (void)setStickerSourceTab:(long long)arg1;
- (void)setStickerSubsectionViewCount:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setWithBitmojiTabVisible:(_Bool)arg1;
- (void)setWithSearch:(_Bool)arg1;
- (void)setWithStickerPick:(_Bool)arg1;

@end

