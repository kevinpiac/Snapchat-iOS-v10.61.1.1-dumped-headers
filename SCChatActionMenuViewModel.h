//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCChatActionMenuTopContainerViewModel;

@interface SCChatActionMenuViewModel : NSObject <NSCopying>
{
    SCChatActionMenuTopContainerViewModel *_topContainerViewModel;
    NSArray *_buttonViewModels;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *buttonViewModels; // @synthesize buttonViewModels=_buttonViewModels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTopContainerViewModel:(id)arg1 buttonViewModels:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCChatActionMenuTopContainerViewModel *topContainerViewModel; // @synthesize topContainerViewModel=_topContainerViewModel;

@end

