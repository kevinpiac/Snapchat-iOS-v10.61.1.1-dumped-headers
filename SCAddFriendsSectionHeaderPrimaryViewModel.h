//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCSearchActionButtonViewModel;

@interface SCAddFriendsSectionHeaderPrimaryViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSearchActionButtonViewModel *_button_actionButtonViewModel;
    NSAttributedString *_title_titleAttributedText;
}

+ (id)buttonWithActionButtonViewModel:(id)arg1;
+ (id)titleWithTitleAttributedText:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchButton:(CDUnknownBlockType)arg1 title:(CDUnknownBlockType)arg2;

@end
