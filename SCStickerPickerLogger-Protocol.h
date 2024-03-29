//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSIndexPath, NSString, SCStickerPickerCategoryCell;
@protocol SCStickerProtocol;

@protocol SCStickerPickerLogger
+ (void)logFriendmojiPickerCloseWithSourceType:(long long)arg1 stickerId:(NSString *)arg2 friendmojiType:(long long)arg3 snapSessionId:(NSString *)arg4 mischiefId:(NSString *)arg5;
- (void)didExpandStickerPackId:(NSString *)arg1;
- (void)didUpdateVisibleItemsWithStickers:(NSArray *)arg1 stickerPacks:(NSArray *)arg2 sourceTab:(long long)arg3;
- (void)logDidSaveStickerPackId:(NSString *)arg1 sourceTab:(long long)arg2;
- (void)logStickerPickerSearchEvent:(NSString *)arg1 results:(NSArray *)arg2;
- (void)logStickerPickerSessionEnded:(id <SCStickerProtocol>)arg1 categoryCell:(SCStickerPickerCategoryCell *)arg2 searchQuery:(NSString *)arg3 index:(unsigned long long)arg4 bitmojiTabVisible:(_Bool)arg5 tabSource:(long long)arg6 stickerPickerType:(long long)arg7 captureSessionId:(NSString *)arg8;
- (void)resetStickerSession;
- (void)viewStickerCategoryAtIndex:(NSIndexPath *)arg1 type:(long long)arg2;
@end

