//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSendToSuggestionViewModel : NSObject <NSCopying>
{
    _Bool _shouldRemoveSelections;
    NSArray *_suggestedRecipients;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSuggestedRecipients:(id)arg1 shouldRemoveSelections:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool shouldRemoveSelections; // @synthesize shouldRemoveSelections=_shouldRemoveSelections;
@property(readonly, copy, nonatomic) NSArray *suggestedRecipients; // @synthesize suggestedRecipients=_suggestedRecipients;

@end

