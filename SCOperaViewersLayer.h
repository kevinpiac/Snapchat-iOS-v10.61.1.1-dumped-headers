//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSArray, NSString, SCOperaPage, SGTILink, UIColor;
@protocol SCOperaSerengetiViewControllerProviding, SCOperaViewProvider;

@interface SCOperaViewersLayer : NSObject <SCOperaLayer>
{
    _Bool _shouldDisplayViewersIcons;
    _Bool _saving;
    _Bool _processing;
    _Bool _uploadFailed;
    _Bool _storyIsPublic;
    _Bool _storyIsGroup;
    _Bool _appearWithTable;
    _Bool _containsAttachment;
    _Bool _offsetEnabled;
    _Bool _deleting;
    _Bool _isDeletable;
    _Bool _isSaveable;
    _Bool _shouldShowTableCellIcon;
    SCOperaPage *_page;
    UIColor *_affordanceColor;
    UIColor *_footerColor;
    unsigned long long _viewedCountFriend;
    unsigned long long _viewedCountOther;
    unsigned long long _screenshotCountFriend;
    unsigned long long _screenshotCountOther;
    NSArray *_storyViewNotesFriend;
    NSArray *_storyViewNotesOther;
    id <SCOperaViewProvider> _viewersLayerCollectionCellIconViewProvider;
    SGTILink *_businessStoryViewersLink;
    id <SCOperaSerengetiViewControllerProviding> _serengetiViewControllerProvider;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *affordanceColor; // @synthesize affordanceColor=_affordanceColor;
@property(readonly, nonatomic) _Bool appearWithTable; // @synthesize appearWithTable=_appearWithTable;
@property(readonly, copy, nonatomic) SGTILink *businessStoryViewersLink; // @synthesize businessStoryViewersLink=_businessStoryViewersLink;
@property(readonly, nonatomic) _Bool containsAttachment; // @synthesize containsAttachment=_containsAttachment;
@property(readonly, nonatomic) _Bool deleting; // @synthesize deleting=_deleting;
@property(readonly, nonatomic) UIColor *footerColor; // @synthesize footerColor=_footerColor;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) _Bool isDeletable; // @synthesize isDeletable=_isDeletable;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSaveable; // @synthesize isSaveable=_isSaveable;
@property(readonly, nonatomic) _Bool offsetEnabled; // @synthesize offsetEnabled=_offsetEnabled;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) _Bool processing; // @synthesize processing=_processing;
@property(readonly, nonatomic) _Bool saving; // @synthesize saving=_saving;
@property(readonly, nonatomic) unsigned long long screenshotCountFriend; // @synthesize screenshotCountFriend=_screenshotCountFriend;
@property(readonly, nonatomic) unsigned long long screenshotCountOther; // @synthesize screenshotCountOther=_screenshotCountOther;
@property(readonly, nonatomic) id <SCOperaSerengetiViewControllerProviding> serengetiViewControllerProvider; // @synthesize serengetiViewControllerProvider=_serengetiViewControllerProvider;
@property(readonly, nonatomic) _Bool shouldDisplayViewersIcons; // @synthesize shouldDisplayViewersIcons=_shouldDisplayViewersIcons;
@property(readonly, nonatomic) _Bool shouldShowTableCellIcon; // @synthesize shouldShowTableCellIcon=_shouldShowTableCellIcon;
@property(readonly, nonatomic) _Bool storyIsGroup; // @synthesize storyIsGroup=_storyIsGroup;
@property(readonly, nonatomic) _Bool storyIsPublic; // @synthesize storyIsPublic=_storyIsPublic;
@property(readonly, copy, nonatomic) NSArray *storyViewNotesFriend; // @synthesize storyViewNotesFriend=_storyViewNotesFriend;
@property(readonly, copy, nonatomic) NSArray *storyViewNotesOther; // @synthesize storyViewNotesOther=_storyViewNotesOther;
@property(readonly, nonatomic) _Bool swipeUpEnabled;
- (unsigned long long)totalScreenshotCount;
- (unsigned long long)totalViewCount;
- (unsigned long long)totalViewerUsernameCount;
- (unsigned long long)type;
@property(readonly, nonatomic) _Bool uploadFailed; // @synthesize uploadFailed=_uploadFailed;
@property(readonly, nonatomic) unsigned long long viewedCountFriend; // @synthesize viewedCountFriend=_viewedCountFriend;
@property(readonly, nonatomic) unsigned long long viewedCountOther; // @synthesize viewedCountOther=_viewedCountOther;
@property(readonly, nonatomic) id <SCOperaViewProvider> viewersLayerCollectionCellIconViewProvider; // @synthesize viewersLayerCollectionCellIconViewProvider=_viewersLayerCollectionCellIconViewProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

