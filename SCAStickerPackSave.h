//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAStickerPackSave : SCAUserTrackedEvent
{
    long long sectionName;
    long long stickerSourceTab;
    NSString *snapSessionId;
    NSString *stickerPickSessionId;
    NSString *stickerPackId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSectionName;
- (id)getSnapSessionId;
- (id)getStickerPackId;
- (id)getStickerPickSessionId;
- (long long)getStickerSourceTab;
- (id)init;
- (void)setSectionName:(long long)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setStickerPackId:(id)arg1;
- (void)setStickerPickSessionId:(id)arg1;
- (void)setStickerSourceTab:(long long)arg1;

@end

