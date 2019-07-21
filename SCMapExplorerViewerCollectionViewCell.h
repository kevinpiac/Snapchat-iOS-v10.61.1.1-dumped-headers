//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCAvatarViewDelegate-Protocol.h"
#import "SCMapPeopleFriendsListener-Protocol.h"

@class NSString, SCAvatarView, SCMapPerson, UILabel;
@protocol SCMapExplorerViewerCollectionViewCellDelegate, SCMapPeopleFriendsProvider;

@interface SCMapExplorerViewerCollectionViewCell : UICollectionViewCell <SCAvatarViewDelegate, SCMapPeopleFriendsListener>
{
    UILabel *_nameLabel;
    SCAvatarView *_avatarView;
    id <SCMapPeopleFriendsProvider> _peopleFriendsProvider;
    id <SCMapExplorerViewerCollectionViewCellDelegate> _delegate;
    SCMapPerson *_person;
}

- (void).cxx_destruct;
- (void)_updateAvatarView;
@property(nonatomic) __weak id <SCMapExplorerViewerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didLongPress:(id)arg1;
- (void)didTap:(id)arg1;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)peopleFriendsProvider:(id)arg1 didUpdateStoryForUserIds:(id)arg2;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
@property(readonly, nonatomic) SCMapPerson *person; // @synthesize person=_person;
- (void)setPerson:(id)arg1 imageDownloader:(id)arg2 peopleProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
