//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SCMyStories;

@protocol SCExportMyStoriesManagerDelegate <NSObject>
- (void)handleSavedMyStories:(SCMyStories *)arg1 withError:(NSError *)arg2;
- (void)handleStartSavingMyStories;
- (void)updateSaveMyStories:(SCMyStories *)arg1 withProgress:(double)arg2;
@end

