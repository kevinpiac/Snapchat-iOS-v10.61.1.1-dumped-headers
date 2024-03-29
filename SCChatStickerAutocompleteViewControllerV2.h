//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, SCChatStickerAutocompleteViewControllerCellView, SCUserSession, UIView;
@protocol SCChatInputStickerAccessorySender;

@interface SCChatStickerAutocompleteViewControllerV2 : UIViewController
{
    SCUserSession *_userSession;
    UIView *_wrapperView;
    id <SCChatInputStickerAccessorySender> _sender;
    long long _maxSize;
    NSMutableArray *_stickerCellViews;
    SCChatStickerAutocompleteViewControllerCellView *_selectedCell;
    SCChatStickerAutocompleteViewControllerCellView *_commitedCell;
    NSArray *_currentStickers;
}

- (void).cxx_destruct;
- (void)_refreshCells;
- (_Bool)commitStickerAtPosition:(struct CGPoint)arg1;
@property(retain, nonatomic) NSArray *currentStickers; // @synthesize currentStickers=_currentStickers;
- (void)hide;
- (id)initWithUserSession:(id)arg1 sender:(id)arg2 maxSize:(long long)arg3;
- (void)loadView;
- (void)selectStickerAtPosition:(struct CGPoint)arg1;
- (void)show;

@end

