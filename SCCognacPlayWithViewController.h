//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FriendsTableIndexDelegate-Protocol.h"
#import "SCRecipientBarDelegate-Protocol.h"
#import "SCUserSelectionListener-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableSet, NSString, SCCognacConfirmationButton, SCCognacListHeaderView, SCCognacPlayWithActionHandler, SCCognacSnapchatterService, SCFriendsTableIndex, SCRecipientBar, SCSearchQueryResultController, SCSendToSelectionResult, SCSendToSelectionStateManager, UICollectionView, UIImageView;
@protocol SCCognacPlayWithViewControllerDelegate;

@interface SCCognacPlayWithViewController : UIViewController <FriendsTableIndexDelegate, SCRecipientBarDelegate, UICollectionViewDelegate, SCUserSelectionListener>
{
    SCCognacListHeaderView *_headerView;
    UIImageView *_mockPlayWithView;
    SCRecipientBar *_recipientBar;
    UICollectionView *_collectionView;
    SCFriendsTableIndex *_friendsIndexView;
    SCCognacConfirmationButton *_playButton;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSearchQueryResultController *_queryResultController;
    SCCognacSnapchatterService *_snapchatterService;
    SCCognacPlayWithActionHandler *_actionHandler;
    NSArray *_outgoingFriends;
    NSMutableSet *_recipientBarSelectedRecipients;
    NSString *_currentQueryText;
    SCSendToSelectionResult *_currentSelctionResult;
    NSDictionary *_indexKeyToRowsAboveDict;
    BOOL _currentIndexCharChoosen;
    id <SCCognacPlayWithViewControllerDelegate> _delegate;
    unsigned long long _maxNumberOfPlayers;
}

- (void).cxx_destruct;
- (void)_animateConfirmationButton:(double)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)_didTapPlayButton;
- (void)_scrollToSection:(long long)arg1 row:(long long)arg2;
- (void)_setupHeaderView;
- (void)_setupPlayWithView;
- (void)_updateConfirmationButtonEnabled:(_Bool)arg1;
- (void)_updatePretypeSuggestionsAsynchronously;
- (void)_updateRecipientBarForSelectionResult:(id)arg1;
- (void)_updateStaturBar;
- (void)_updateWithSelectionResult:(id)arg1 selectedItems:(id)arg2;
- (_Bool)attemptAddRecipient:(id)arg1 sender:(id)arg2 section:(id)arg3;
- (_Bool)attemptRemoveRecipient:(id)arg1 sender:(id)arg2 section:(id)arg3;
@property(nonatomic) __weak id <SCCognacPlayWithViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeHeight:(double)arg1;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (void)dismiss;
- (id)getSuggestion:(id)arg1;
- (id)initWithSnapchatterService:(id)arg1;
- (void)keyboardWillChange:(id)arg1 willShow:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
@property(nonatomic) unsigned long long maxNumberOfPlayers; // @synthesize maxNumberOfPlayers=_maxNumberOfPlayers;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)scrollToIndex:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

