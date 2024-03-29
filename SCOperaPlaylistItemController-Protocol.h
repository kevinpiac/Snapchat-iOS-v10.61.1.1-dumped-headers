//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, NSString, SCOperaPlaylist, SCOperaPlaylistItem, SCOperaPlaylistItemGroup;

@protocol SCOperaPlaylistItemController <NSObject>
- (void)asyncUpdatePlaylistItemGroupForID:(NSString *)arg1;
- (NSObject *)dataModelForPlaylistItem:(SCOperaPlaylistItem *)arg1;
- (NSObject *)dataModelForPlaylistItemGroup:(SCOperaPlaylistItemGroup *)arg1;
- (SCOperaPlaylistItem *)firstPlaylistItemToDisplay;
- (SCOperaPlaylistItem *)initialPlaylistItemToDisplayInGroup:(SCOperaPlaylistItemGroup *)arg1;
- (_Bool)insertPlaylistItem:(SCOperaPlaylistItem *)arg1 afterPlaylistItem:(SCOperaPlaylistItem *)arg2;
- (_Bool)insertPlaylistItemGroup:(SCOperaPlaylistItemGroup *)arg1 afterPlaylistItemGroup:(SCOperaPlaylistItemGroup *)arg2;
- (SCOperaPlaylist *)playlist;
- (void)playlistItemDidUpdateForID:(NSString *)arg1;
- (SCOperaPlaylistItem *)playlistItemForItemID:(NSString *)arg1;
- (SCOperaPlaylistItem *)playlistItemForPageID:(NSString *)arg1;
- (SCOperaPlaylistItemGroup *)playlistItemGroupForGroupId:(NSString *)arg1;
- (void)removePlaylistItemForID:(NSString *)arg1;
- (SCOperaPlaylistItemGroup *)rightMostViewedPlaylistItemGroup;
- (void)setPlaylistCurrentGroupId:(NSString *)arg1 resetCurrentItem:(_Bool)arg2;
- (void)setPlaylistCurrentItemId:(NSString *)arg1;
- (void)updatePlaylistWithGroups:(NSArray *)arg1;
@end

