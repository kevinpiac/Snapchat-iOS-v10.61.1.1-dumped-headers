//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITableView;

@protocol SCChatCellMediaDelegate <NSObject>
- (void)clearMediaForCells:(UITableView *)arg1;
- (void)startAnimationForCells:(UITableView *)arg1;
- (void)startVideoPlaybackForCells:(UITableView *)arg1;
- (void)stopAnimationForCells:(UITableView *)arg1;
- (void)stopAudioVideoNotePlayer;
- (void)stopVideoPlaybackForCells:(UITableView *)arg1;
@end
