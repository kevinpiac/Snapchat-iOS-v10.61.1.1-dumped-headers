//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryConversationViewModel-Protocol.h"

@class NSString, SCAvatarContainerViewModel, SCProfileChatMediaDataSource;

@interface SCGalleryConversationViewModel : NSObject <SCGalleryConversationViewModel>
{
    SCAvatarContainerViewModel *_avatarViewModel;
    SCProfileChatMediaDataSource *_chatDataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCAvatarContainerViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
@property(readonly, nonatomic) SCProfileChatMediaDataSource *chatDataSource; // @synthesize chatDataSource=_chatDataSource;
@property(readonly, copy) NSString *description;
- (id)initWithAvatarViewModel:(id)arg1 chatDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
