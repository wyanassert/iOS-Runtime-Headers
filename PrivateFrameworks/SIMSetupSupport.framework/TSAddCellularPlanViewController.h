/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSAddCellularPlanViewController : BFFSplashController <TSSetupFlowItem, UINavigationControllerDelegate> {
    bool  _allowDismiss;
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _showAddPlan;
}

@property bool allowDismiss;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool showAddPlan;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowDismiss;
- (id)delegate;
- (id)initShowAddPlan:(bool)arg1 allowDismiss:(bool)arg2;
- (void)leftCancelButtonTapped;
- (void)setAllowDismiss:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowAddPlan:(bool)arg1;
- (bool)showAddPlan;
- (void)viewDidLoad;

@end