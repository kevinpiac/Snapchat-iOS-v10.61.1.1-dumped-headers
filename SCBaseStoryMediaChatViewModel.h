//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

@class SCBaseStoryMediaCardViewModel;

@interface SCBaseStoryMediaChatViewModel : SCSavableItemChatViewModel
{
    SCBaseStoryMediaCardViewModel *_baseStoryMediaCardViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCBaseStoryMediaCardViewModel *baseStoryMediaCardViewModel; // @synthesize baseStoryMediaCardViewModel=_baseStoryMediaCardViewModel;
- (double)bodyContentWidth;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3 baseStoryMediaCardViewModel:(id)arg4;
- (double)payloadHeight;
- (double)payloadVerticalMargin;
- (_Bool)shouldExpandToFullScreen;

@end

